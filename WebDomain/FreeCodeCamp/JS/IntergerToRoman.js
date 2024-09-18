const number = document.getElementById("number");
const submit = document.getElementById("convert-btn");
const output = document.getElementById("output");
const map  = [ 
["I", 1], ["IV", 4], ["V", 5], ["IX", 9], ["X", 10], ["XL", 40], ["L", 50],
["XC", 90], ["C", 100], ["CD", 400], ["D",500], ["CM", 900], ["M", 1000]];
let input;

console.log("!");
submit.addEventListener("click", ()=>{
    input = number.value;
    console.log(input)
})
