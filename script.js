let input = document.querySelector("input");
let button = document.querySelector("button");
let output = document.querySelector("p");
button.addEventListener("click", function(e){
    output.innerHTML = "Word: ";
    let word = input.value;
    output.innerHTML+= word + "<br>";
    output.innerHTML+= "Reverse: ";
    let backwords = "";
    for(var i = word.length - 1; i >= 0; i--) {
        backwords+= word[i];
    }
    output.innerHTML+= backwords;

});
