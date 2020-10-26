// PROGRAM-NAME : log emoji
// By Laurenziello
// PROGRAM-CODE :

// Define your custom commands and emoji
var commands = [
    [ "hansup", "🙌"],
    [ "bug", "😰"]
  ];

  (function() {
    if(!window.console) return;
    // Create custom commands
    commands.forEach(function(command) {
      window.console[command[0]] = function() {
        // Second argument is size, default is 10px
        var size = 10;
        if(arguments.length > 1) {
          size = [].pop.call(arguments);
        }
        // Get arguments as a string
        var args = Array.prototype.slice.call(arguments).toString().split(',').join(',');
        // Log to the console with emoji
        console.log("%c" + args + " " + command[1], "font-size: " + size + "px");
      }
    });
  })();

  // Log to the console!
  console.bug("Bugs, again.", 50);
  console.hansup("Great work!", 50);