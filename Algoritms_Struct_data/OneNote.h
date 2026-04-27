//#pragma once
//#include <vector>
//class quick 
//{
//public:
//    int partition(std::vector<int>& arr, int low, int high)
//    {
//        int pivot = arr[high];
//        int i = low - 1;
//
//        for (int j = low; j < high; j++)
//        {
//            if (arr[j] <= pivot)
//            {
//                if (arr[j + 1] == arr[j])
//                {
//                    return arr[j];
//                }
//                i++;
//                std::swap(arr[i], arr[j]);
//            }
//        }
//        std::swap(arr[i + 1], arr[high]);
//        return i + 1;
//    }
//
//    void quickSort(std::vector<int>& arr, int low, int high)
//    {
//        if (low < high)
//        {
//            int pi = partition(arr, low, high);
//            quickSort(arr, low, pi - 1);
//            quickSort(arr, pi + 1, high);
//        }
//    }
//
//    void quickSort(std::vector<int>& arr)
//    {
//        if (!arr.empty())
//        {
//            quickSort(arr, 0, arr.size() - 1);
//        }
//    }
//
//
//
//
//    /*vector<int> getConcatenation(vector<int>& nums, int target)
//    {
//        vector<int> indexs = {};
//        for (int i = 0; i < nums.size(); i++)
//        {
//            for (int j = 1; j < nums.size(); j++)
//            {
//                if (nums[i] + nums[j] == target)
//                {
//                    indexs.push_back(i);
//                    indexs.push_back(j);
//                    indexs = { i, j };
//                    return indexs;
//                }
//            }
//
//        }
//
//        return indexs;
//    }*/
//
//    //vector<int> twoSum(vector<int>& nums, int target)
//    //{
//    //    vector<int> indexs = {};
//    //    nums.reserve(nums.size());
//
//    //    int med = (nums.size() - 1) / 2;
//    //    for (int i = 0; i < nums.size(); i++)
//    //    {
//    //        for (int j = nums.size() - 1; j > i; j--)
//    //        {
//    //            if (nums[i] + nums[j] == target)
//    //            {
//    //                indexs.push_back(i);
//    //                indexs.push_back(j);
//    //                indexs = { i, j };
//    //                cout << "Indexs: " << i << ", " << j << endl;
//    //                return indexs;
//    //            }
//    //        }
//
//    //    }
//
//    //    return indexs;
//    //}
//
//    //vector<int> shuffle(vector<int>& nums, int n)
//    //{
//    //    int med = nums.size() / 2;
//    //    vector<int>newArr = {};
//
//    //    for (int i = 0; i < med;)
//    //    {
//    //        for (int j = med; j < nums.size(); j++)
//    //        {
//    //            newArr.push_back(nums[i]);
//    //            newArr.push_back(nums[j]);
//    //            i++;
//    //        }
//    //    }
//    //    for (int i = 0; i < newArr.size(); i++)
//    //    {
//    //        cout << newArr[i] << " ";
//    //    }
//    //    return newArr;
//    //}
//
//    //int findMaxConsecutiveOnes(vector<int>& nums)
//    //{
//    //    int count = 0;
//    //    int count2 = 0;
//    //    for (int i = 0; i < nums.size(); i++)
//    //    {
//    //        if (nums[i] == 1)
//    //        {
//    //            count += 1;
//    //            if (count > count2)
//    //            {
//    //                count2 = count;
//    //            }
//    //        }
//    //        else
//    //        {
//    //            count = 0;
//    //        }
//    //    }
//    //    cout << "maximum number of consecutive 1: " << count2;
//    //    return count2;
//    //}
//
//    //int find(vector<int>& arr, int n)
//    //{
//    //    for (int i = 0; i < arr.size(); i++)
//    //    {
//    //        if (arr[i] == n)
//    //        {
//    //            cout << arr[i] << " = " << n << endl;
//    //            return arr[i];
//    //        }
//    //    }
//    //}
//
//    //int binSearch(vector<int>& arr, int n)
//    //{
//    //    int left = 0 + 1;
//    //    int right = arr.size() - 1;
//    //    int count = 0;
//    //    auto it = arr.begin() + n - 1;
//    //    arr.erase(it);
//    //    while (left <= right)
//    //    {
//    //        int mid = left + (right - left) / 2;
//
//
//    //        if (arr[mid] == n)
//    //        {
//    //            cout << arr[mid] << " = " << n << endl;
//    //            cout << "Find value: " << n << endl;
//    //            return n;
//
//    //        }
//
//    //        else if (arr[mid] < n)
//    //        {
//    //            left = mid + 1;
//    //        }
//    //        else
//    //        {
//    //            right = mid - 1;
//    //        }
//    //    }
//    //    return 1;
//    //}
//
//    //int find_for_Duplicate(vector<int>& nums)
//    //{
//    //    sort(nums.begin(), nums.end());
//    //    nums.reserve(nums.size());
//
//    //    /*for (int num : nums)
//    //    {
//    //        cout << num << " ";
//    //    }
//    //    cout << endl;*/
//
//    //    int dub = 0;
//    //    for (int i = 0; i < nums.size(); i++)
//    //    {
//    //        if (nums[i] == nums[i + 1])
//    //        {
//    //            dub = nums[i];
//    //            cout << "Dublicate findet: " << dub << endl;
//    //            return dub;
//    //        }
//
//    //    }
//    //    return dub;
//    //}
//
//    //int find_Hesh_Duplicate(vector<int>& nums)
//    //{
//    //    sort(nums.begin(), nums.end());
//    //    nums.reserve(nums.size());
//
//    //    for (int num : nums)
//    //    {
//    //        cout << num << " ";
//    //    }
//    //    cout << endl;
//
//    //    int dub = 0;
//    //    for (int i = 0; i < nums.size(); i++)
//    //    {
//    //        if (nums[i] == nums[i + 1])
//    //        {
//    //            dub = nums[i];
//    //            cout << "Dublicate findet: " << dub << endl;
//    //            return dub;
//    //        }
//
//    //    }
//    //    return dub;
//    //}
//
//    //vector<int> smallerNumbersThanCurrent(vector<int>& nums)
//    //{
//    //    vector<int>howMuch = {};
//
//    //    for (int i = 0; i < nums.size(); i++) //8,1,2,2,3
//    //    {
//    //        int count = 0;
//    //        for (int j = 0; j < nums.size(); j++)
//    //        {
//    //            if (nums[j] < nums[i])
//    //            {
//    //                count++;
//
//    //            }
//
//    //        }
//    //        howMuch.emplace_back(count);
//    //    }
//
//    //    /*cout << "How much number for one element: " << endl;
//    //    for (int cnt : howMuch)
//    //    {
//    //        cout << cnt << " ";
//    //    }*/
//
//    //    return howMuch;
//    //}
//    //vector<int> findDisappearedNumbers(vector<int>& nums) //4, 3, 2, 7, 8, 2, 3, 1 -> 1 2 2 3 3 4 7 8
//    //{
//    //    sort(nums.begin(), nums.end());
//    //    int n = nums.size();
//    //    vector <bool> seen(n + 1, false);
//    //    for (int num : nums)
//    //    {
//    //        seen[num] = true;
//    //    }
//
//    //    vector<int> result;
//    //    for (int i = 1; i <= n; i++)
//    //    {
//    //        if (!seen[i]) result.emplace_back(i);
//    //    }
//
//    //    for (int res : result)
//    //    {
//    //        cout << res << " ";
//    //    }
//    //    cout << endl;
//    //    return result;
//    //}
//
//    //vector<string> buildArray(vector<int>& target, int n)
//    //{
//    //    string push = "Push";
//    //    string pop = "Pop";
//    //    vector <string> op;
//
//    //    int i = 0;
//    //    int j = 1;
//
//    //    while (j <= n)
//    //    {
//    //        cout << "Checked: " << j << " vs. " << target[i] << endl;
//    //        if (target[i] == j)
//    //        {
//    //            op.emplace_back(push);
//    //            j++;
//    //            if (i < target.size()) i++;
//    //            else { continue; }
//    //        }
//    //        else
//    //        {
//    //            op.emplace_back(push);
//    //            op.emplace_back(pop);
//    //            j++;
//    //        }
//    //    }
//
//    //    for (string o : op)
//    //    {
//    //        cout << o << " ";
//    //    }
//
//    //    return op;
//    //}
// int evalRPN(vector<string>& tokens) //"4","13","5","/","+"
//{
//    stack<int> st;
//    for (string token : tokens)
//    {
//        if (token == "+" || token == "-" || token == "*" || token == "/")
//        {
//            int b = st.top(); st.pop();
//            int a = st.top(); st.pop();
//
//            if (token == "+")
//            {
//                cout << a << " + " << b << endl;
//                st.push(a + b);
//            }
//            if (token == "-")
//            {
//                cout << a << " - " << b << endl;
//                st.push(abs(a - b));
//            }
//            if (token == "*")
//            {
//                cout << a << " * " << b << endl;
//                st.push(abs(a * b));
//            }
//            if (token == "/")
//            {
//                cout << "a" << " = " << a << endl;
//                cout << "b" << " = " << b << endl;
//
//                if (a < b && a != 0)
//                {
//                    cout << b << " / " << a << endl;
//                    st.push(b / a);
//                }
//                else
//                {
//                    if (b != 0)
//                    {
//                        cout << a << " / " << b << endl;
//                        st.push(a / b);
//                    }
//                    else
//                    {
//                        st.push(b / a);
//                    }
//                }
//            }
//        }
//        else
//        {
//            cout << "Find number: " << token << endl;
//            st.push(atoi(token.c_str()));
//        }
//    }
//    cout << st.top();
//    return  st.top();
//    }
//};
