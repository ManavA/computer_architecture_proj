I=10000000
bench=milc
bpname=alwaysback
statsname=stats-$bench-$bpname-$I
./build/ALPHA/gem5.opt --stats-file=$statsname configs/My/se.py --bench=$bench --cpu-type=inorder --caches -I $I
cat m5out/$statsname | grep branchPred
cat m5out/$statsname | grep branch_predictor
cat m5out/$statsname | grep execution_unit
