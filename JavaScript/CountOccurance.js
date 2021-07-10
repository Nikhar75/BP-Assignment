function count(str) {
    var obj = {};
    
    str.split(" ").forEach(function(el, i, arr) {
      obj[el] = obj[el] ? ++obj[el] : 1;
    });
    
    return obj;
  }
  
  console.log(count("Welcome to Bluepineapple."));
