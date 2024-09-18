const result = document.getElementById("result");
const Btn = document.getElementById("check-btn");

Btn.addEventListener("click", () => {
  let input = document.getElementById("text-input").value;
  let input_ = input.split("");
  let string = input_.toString();
  let cleanstring = string.replace(/[^a-zA-Z0-9]/g, "").toLowerCase();
  console.log(cleanstring);
  let n = cleanstring.length;
  if (n === 0) {
    alert("Please input a value");
    return false;
  }
  for (let i = 0; i < n / 2; i++) {
    if (cleanstring[i] != cleanstring[n - i - 1]) {
      result.innerHTML = `<strong>${input}</strong> is not a palindrome`;
      return false;
    }
  }
  result.innerHTML = `<strong>${input}</strong> is a palindrome`;
  return true;
});
