\#key details

\*use  median for min  operation to make all element in array equal by adding or sub any number  

\*map m.size() give size of map all key value even one of those which you never created but created when you tried to access them to get rid from always delete using m.erase(key)

\* agar return long long aur int k, sum then return k\*sum can cause overflow therefore use return 1LL \*k\*sum

\* ek string me baar baar pop front ke jagha sirf do varible se store kar sakte ha starting\_index and size  //useful in sliding window

\* agar kahi interval ha to sort to kar le ek  baar kuch to hoga hi  greedy whagra  2 question n meeting in one room and non overlapping intervals  taki pata rahe st ko deakhte hue sort karna ha ya end ko

agar interval merge to start ke hisab se sort or agar sirf non overlapping to end ke hisab se sort

\* comparator   kya a b ke agge sahi ha    

&#x09;					sort(arr.begin(), arr.end(), \[](const auto\& a, const auto\& b) {

&#x20;  						 return a\[1] < b\[1]; // sort by end time

&#x09;								});

#### \###### state object matlab ek transition se dusri par jane par kya kya info chaiye

##### \* MOVING i INSIDE A NESTED LOOP AROMATIZED O(N) -----> " WHAT INFORMATION I REALLY NEED TO KNOW? or what state/object do i need to maintain"

##### If I had to pause the algorithm and resume later, what is the smallest information packet I need to save?

