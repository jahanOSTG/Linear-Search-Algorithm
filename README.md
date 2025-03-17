# Linear Search Algorithm<br>
Linear Search is a simple searching algorithm that sequentially checks each element in an array until the target element is found or the search completes.
## Algorithm (Pseudocode)<br>

1. Start from index i = 0<br>
2. Repeat until i < n (size of the array):<br>
   a.</b> If array[i] == search_key:<br>
         - Return i (found at index i)<br>
          
   b. Else, move to the next element<br>
3. If not found, return -1 (element does not exist)<br>

## Time Complexity Analysis :<br>
Best Case: 
𝑂
(
1
) (if the key is at the first index).<br>
Worst Case: 
𝑂
(
𝑛
)(if the key is at the last index or not present).<br>
Average Case: 
𝑂
(
𝑛
).
---
## Output: Linear Search
![output](output.png)


