I=100000
bench=milc
statsname=stats-$bench-$I
./build/ALPHA/gem5.opt --stats-file=$statsname configs/My/se.py --bench=$bench --cpu-type=inorder --caches -I $I
cat m5out/$statsname | grep branchPred
cat m5out/$statsname | grep branch_predictor
cat m5out/$statsname | grep execution_unit
