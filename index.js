//        **** Fuck You Prank ****

// document.getElementsByTagName("body")[0].addEventListener(
//   "click",
//   () =>
//     (document.getElementsByTagName("body")[0].innerHTML = `<h1 style="
//       color:red;
//       text-align:center;
//       font-weight:900;
//       font-size:10rem;">FUCK YOU</h1>`)
// );

// **** 10 FAST FINGERS HACK ****

// var word_idx = 0;
// var interval_per_word = 250; // in milliseconds
// function hackit() {
//   if (word_idx < words.length) {
//     $("#inputfield").val(words[word_idx] + " ");
//     var keyup = jQuery.Event("keyup");
//     keyup.which = 32;
//     $("#inputfield").trigger(keyup);
//     word_idx++;
//     setTimeout("hackit()", interval_per_word);
//   }
// }
// setTimeout("hackit()", interval_per_word);

// **** WHATSAPP HACK ****

/*Schedule your message section starts here
var now = new Date();

// Replace Hours, Mins and secs with your
// desired time in 24 hour time format e.g.
// var rt = new Date(now.getFullYear(), now.getMonth(),
// now.getDate(), Hours, Minutes, Sec, 0) - now;
// to send message at 2.30PM
var rt = new Date(now.getFullYear(), now.getMonth(),
now.getDate(), 14, 30, 00, 0) - now;

if (rt < 0) {
    rt += 86400000;
}

setTimeout(startTimer, rt);
Schedule your message section ends here*/

// Replace My Contact Name with the name
// of your WhatsApp contact or group e.g. title="Peter Parker"

// name = "My Contact Name";

// function simulateMouseEvents(element, eventName) {
//   var mouseEvent = document.createEvent("MouseEvents");
//   mouseEvent.initEvent(eventName, true, true);
//   element.dispatchEvent(mouseEvent);
// }

// simulateMouseEvents(
//     document.querySelector('[title="' + name + '"]'),
//     "mousedown"
// );

// var eventFire = (MyElement, ElementType) => {
//   var MyEvent = document.createEvent("MouseEvents");
//   MyEvent.initMouseEvent(ElementType,true,true,window,0,0,0,0,0,false,false,false,false,0,null);
//   MyElement.dispatchEvent(MyEvent);
// };

// function myFunc() {
//   messageBox = document.querySelectorAll("[contenteditable='true']")[1];

//   counter = 5; // Replace 5 with the number of times you want to send your message

//   for (i = 0; i < counter; i++) {
//     message = "I";
//     event = document.createEvent("UIEvents");
//     messageBox.innerHTML = message.replace(/ /gm, ""); // test it
//     // event.initUIEvent("input", true, true, window, 1);
//     messageBox.dispatchEvent(event);

//     eventFire(document.querySelector('span[data-icon="send"]'), "click");

//     message ="Love";
//     event = document.createEvent("UIEvents");
//     messageBox.innerHTML = message.replace(/ /gm, ""); // test it
//     // event.initUIEvent("input", true, true, window, 1);
//     messageBox.dispatchEvent(event);

//     eventFire(document.querySelector('span[data-icon="send"]'), "click");

//     message ="You";
//     event = document.createEvent("UIEvents");
//     messageBox.innerHTML = message.replace(/ /gm, ""); // test it
//     // event.initUIEvent("input", true, true, window, 1);
//     messageBox.dispatchEvent(event);

//     eventFire(document.querySelector('span[data-icon="send"]'), "click");
//   }
// }
// myFunc();



// **** PROBLEMS ****

// PROBLEM 1:- Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// var nums = [2,7,11,15];
// var target = 9
// var twoSum = function(nums, target) {
//     for (let i = 0; i < nums.length; i++) {
//         const elem1 = nums[i];
//         for (let j = 0; j < nums.length; j++) {
//             const elem2 = nums[j];
//             if (elem1+elem2 === target&& i !=j) {
//                 return [i,j]
//             }
//         }
//     }
// };
// console.log( twoSum(nums,target));

// PROBLEM 2 :- Given an integer x, return true if x is palindrome integer.

// var x = 1021;
// var isPalindrome = function (x) {
//     var str =  x.toString();
//     var is = false;
//     for (let i = 0; i < str.length; i++) {
//         if(str.charAt(i)=== str.charAt(str.length -1 - i) ){
//             is = true;
//             continue;
//         }else{
//             is = false;
//             break;
//         }
//     }
//     return is;
// };
// console.log( isPalindrome(x))

// PROBLEM 3 :- You have a family tree and you have to print every children of family with there generation

// const tree = {
//   name:"",
//   children:[
//     {
//       name: "Anand",
//       children: [
//           {
//               name: "Dashrath",
//               children: [
//                   {
//                       name: "Sitesh",
//                       children: [
//                           {
//                               name: "Yadnesh",
//                               children: []
//                           }
//                       ]
//                   }
//               ]
//           },
//           {
//               name: "Machindra",
//               children: [
//                   {
//                       name: "Tejas",
//                       children: [
//                           {
//                               name: "Tanishka",
//                               children: []
//                           }
//                       ],
//                   },
//                   {
//                       name: "Amol",
//                       children: [
//                           {
//                             name : "Advika",
//                             children:[]
//                           }
//                       ],
//                   },
//                   {
//                       name: "Amit",
//                       children: []
//                   }
//               ]
//           }
//       ]
//     }
//   ]
// }

// function printTree(t, depth = 0) {
//   t.children.forEach((child,index) => {
//       // you'd need to do some extra formatting here if you
//       // want ordinals like "1st", "2nd", etc.
//       console.log(`gen ${depth + 1}: ${child.name}`);
//       printTree(child, depth + 1);
//   })
// }
// printTree(tree);

// Problem 4 :- Create a function that calculates the number of different squares in an n * n square grid. Check the Resources tab.

// var nums =0;
// function numberSquares(n) {
// 	if (n == 0){
// 	   return;
// 	}
// 	// nums = nums+n**2;
// 	// numberSquares(n-1);
//         // return nums;
//         return n**2 + numberSquares(--n);
// };
// const numberSquares = n => n > 1? n**2 + numberSquares(n-1) : 1;
// console.log("the best i gpot", numberSquares(12));


// Problem 5 :- Find how many vowels are present in the String

// function findVowels(str) {
//     var vowels = ["a","e","i","o","u"];
//     var count = 0;
//     for (const char in str.toLowerCase()) {
//         if (vowels.includes(char)) {
//             count++;
//         };
//     }
//     return count;
// }
// console.log( findVowels("siddheshaieou"));


// Problem 6 :- Venkatesh__Remove any string between two strings at all occurences;

// var str ="this is a string input(\"this is a string\") which is a good input(\"IloveYou3000\")";
// console.log(str, "\noriginal string");
// var count = (str.match(/input/g) || []).length;
// for (let i = 0; i < count; i++) {
//     var stringToBeRemoved = str.substring(
//         str.indexOf("input(\""),
//         str.indexOf("\")", str.indexOf("input("))+2
//     );
//     console.log(stringToBeRemoved, "\nstring to be removed");
//     str = str.replace(stringToBeRemoved, "input()");
//     console.log(str, "\nreplaced string");
// }
// console.log(str,"\nFinal String")


// Problem 7 :- remove duplicates from an array or String

// var a = ["a","b","c","a","d"]
// // var a = "avbdckekjaidij";
// function myFunc(str) {
//     return str
//     // .split("")
//     .filter((char,index,arr)=>{
//         return arr.indexOf(char) === index;
//     })
//     // .join("")
        
// };
// console.log(myFunc(a));
