fun main() {
    var t = readln().toInt()
    while(t>0){
      var n = readln().toInt()
     if(n==1) {
      println(1) 
     }
     else if(n==2){
      println(2) 
     }
     else if(n==4) {
       println(1)
     }
     else if(n==7) {
       println(1)
     }
     else{
       println(0)
     }
     t--
    }
}