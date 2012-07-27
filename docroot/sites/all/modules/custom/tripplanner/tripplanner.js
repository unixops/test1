// We wrap the entire code in an anonymous function
// in order to prevent namespace collisions, and to
// allow for jQuery to be set in a safe mode where
// it will not collide with other javascript libraries.
// While this is the proper way to do it in Drupal 7,
// this method is actually good to use in Drupal 6 as
// well, for the same reasons.
(function($)
{
	// In Drupal 6, each element of Drupal.behaviors
	// was a function that was executed when the
	// document was ready. In Drupal 7, each element
	// of Drupal.behaviors is an object with an
	// element 'attach' (and optionally an element
	// 'detach'), which is executed when the document
	// is ready
	Drupal.behaviors.formTheme = {
		attach:function() {
			// First, define an empty array
			var defaults = [];
			// Next, add three elements to the array,
			// one for each of the form elements. The value
			// is of the array element is set as the default
			// text. This text is run through Drupal.t(),
			// which is the Drupal JavaScript equivalent
			// of the Drupal PHP t() function, and allows
			// for translating of text in a JavaScript document
			defaults["#edit-txtorigininput"] = Drupal.t("Full Address, Landmark or Station Name");
			defaults["#edit-txtdestinationinput"] = Drupal.t("Full Address, Landmark or Station Name");
			// Next we loop through each of the elements of the array
			var element;
			for(element in defaults)
			{
				// We wrap the body in the following if() statement
				// as each element in an array will also have a
				// prototype element. If you don't understand this,
				// don't worry. Just copy it. It will make your
				// for(A in B) loops run better.
				if(defaults.hasOwnProperty(element)) {
					// 1) Set a placeholder in the form element
					// 2) Set the CSS text color to grey for the placeholder
					// 3) Attach an onfocus and onblur listener to each element
					$(element).val(defaults[element]).css("color", "grey").focus(function()
					{
						// This is entered on focus. It checks
						// if the value of the form element is
						// the default value of the placeholder,
						// and if it is, it clears the value and
						// sets the text color to black,as the
						// entered text will be the actual text
						// and not the greyed out placeholder text.
						var key = "#" + $(this).attr("id");
						if($(this).val() === defaults[key]) {
							$(this).css("color", "black").val("");
						}
						
					}).blur(function()
					{
						// This is entered on blur, when the element
						// is exited out of. It checks if the element
						// is empty, and if it is, it sets the default
						// placeholder text back into the element, and
						// changes the text color to the grey placeholder
						// text color.
						if($(this).val() == "") {
							var key = "#" + $(this).attr("id");
							$(this).css("color", "grey").val(defaults[key]);
						}
					});
				}
			}
		}
	};
}(jQuery));