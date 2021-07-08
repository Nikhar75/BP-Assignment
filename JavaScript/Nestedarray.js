const data = [

    [ 'John' ,  90000,  'July 1, 2010'],
    
    ['David' , 75000, 'August 15, 2009'],
    
    [ 'Ana' ,  80000, 'December 12, 2011']
    
    ];
  
    function flatten(arr) {
      let flattened = [];
      for (let i=0; i<arr.length; i++){
        Array.isArray(arr[i])
        ? flattened = flattened.concat(flatten(arr[i]))
        : flattened.push(arr[i]);
      }
      return flattened;
    }

    console.log(
        flatten(data)
        )