/*
* CKEditor Maxlength Plugin
*
* Adds a character count to the path toolbar of a CKEditor instance
*
* @package maxlength
* @author Sage McEnery
* @version 1
* @copyright divgo 2012
* based on Word Count plugin from : http://www.n7studios.co.uk/2010/03/01/ckeditor-word-count-plugin/
*/
(function ($) {
	CKEDITOR.plugins.maxlength = {
	};

	// var plugin = CKEDITOR.plugins.maxlength;

	function doCharacterCount(evt) {
		var editor = evt.editor;
		if ($("span#cke_maxlength_" + editor.id).length > 0) {
			setTimeout(function () {
				// var charCount = editor.getData().length;
				var data = editor.getData();
				var jqData = $('<jqdata>' + data + '</jqdata>');
				var charCount = jqData.text().length;
				var remainingCounter = $("span#cke_maxlength_" + editor.id + " .remaining-chars");

				if (editor.config.max_length > 0) {
					// wcTarget.html("Character " + charCount + "/" + editor.config.max_length);
					remainingCounter.text(editor.config.max_length - charCount);
				}
				// else {
				// 	// wcTarget.html("Character: " + charCount);
				// 	wcTarget.html("Character: " + charCount);
				// };

				if (charCount > editor.config.max_length) {
					remainingCounter.css('color', 'red');
					editor.execCommand('undo');
					remainingCounter.text("0");
				} else if (charCount == editor.config.max_length) {
					editor.fire('saveSnapshot');
					remainingCounter.css('color', 'red');
				} else {
					remainingCounter.css('color', 'green');
				};
			}, 100);
		}
	}

	/**
	* Adds the plugin to CKEditor
	*/
	CKEDITOR.plugins.add('maxlength', {
		init: function (editor) {

			if ($("#" + editor.name).attr("maxlength")) {
				editor.config.max_length = $("#" + editor.name).attr("maxlength");
			} else if ($("#" + editor.name).attr("data-maxlen")) {
				editor.config.max_length = $("#" + editor.name).attr("data-maxlen");
			} else {
				editor.config.max_length = 0;
			}

			// console.log(editor.name);
			// console.log(editor.id);
			// console.log(editor.config.max_length);


			setTimeout(function () {
				if (editor.config.max_length > 0) {
					// let bottomSelector = "#" + editor.id + "_bottom";
					// console.log(bottomSelector);
					// $("#" + editor.id + "_bottom").append("<span id='cke_maxlength_" + editor.name + "'>Character: " + editor.getData().length + '/' + editor.config.max_length + "</span>");
					// $("#" + editor.id + "_bottom").append("<span id='cke_maxlength_" + editor.name + "'>Ce champ est limité à " + editor.config.max_length + " caractères</span>");
					let limitInfoText =
						"<span id=\"cke_maxlength_" + editor.id + "\" class=\"field-help-emphasis\">"
						+ "Ce champ est limité à <span class=\"char-limit\">" + editor.config.max_length + "</span> caractères : "
						+ "il vous reste <span class=\"remaining-chars\">" + editor.config.max_length + "</span> caractères."
						+ "</span>";

					$("#" + editor.id + "_bottom").append(limitInfoText);
				}
				// else {
				// 	$(".cke_bottom").append("<span id='cke_maxlength_" + editor.name + "'>Character: " + editor.getData().length + '/' + editor.config.max_length + "</span>");
				// }
			}, 1000);

			editor.on('key', doCharacterCount);
		}
	});
})(jQuery);

// Plugin options
CKEDITOR.config.max_length = 0;

