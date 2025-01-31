class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {

        int n = classes.size();
        double total = 0;
        
        vector<tuple<double, int, int>> heap;

           for (int i = 0; i < n; i++) 
        {
            int pass = classes[i][0], totalStudents = classes[i][1];
            total += (double)pass / totalStudents;
           heap.push_back(make_tuple(CalculateProfit(pass, totalStudents), pass, totalStudents));
        }

        
        MakeHeap(heap);

     
        while (extraStudents-- > 0) 
        {
            auto [maxIncrement, pass, totalStudents] = heap[0];

           
            if (maxIncrement <= 0)
            break;

            total += maxIncrement;
            pass++;
            totalStudents++;
            heap[0] = make_tuple(CalculateProfit(pass, totalStudents), pass, totalStudents);
            HeapifyDown(heap, 0);
        }

       
        return total / n;
    }

private:
  
    double CalculateProfit(int pass, int total) {

        double current_pass = (double)pass / total;
        double new_pass = (double)(pass + 1) / (total + 1);

        return new_pass - current_pass;
    }

   
    void MakeHeap(vector<tuple<double, int, int>>& heap) {

     
        for (int i = heap.size() / 2 - 1; i >= 0; i--) 
        {
            HeapifyDown(heap, i);
        }
    }

  
    void HeapifyDown(vector<tuple<double, int, int>>& heap, int i) {

        int size = heap.size();

        while (true) 
        {
            int largest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            
            if (left < size && get<0>(heap[left]) > get<0>(heap[largest])) 
            {
                largest = left;
            }
           
            if (right < size && get<0>(heap[right]) > get<0>(heap[largest])) 
            {
                largest = right;
            }
           
            if (largest == i)
            break;

           
            swap(heap[i], heap[largest]);
            
            i = largest;
        }
    }
};