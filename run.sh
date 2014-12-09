I=100000
bench=milc
bpname=always_back
DATE=$(date +"%Y%m%d%H%M%S")
statsname=stats-$bench-$bpname-$I-$DATE
echo $statsname
./build/ALPHA/gem5.opt --stats-file=$statsname configs/My/se.py --mem-size=4GB --bench=$bench --cpu-type=inorder --caches -I $I
cat m5out/$statsname | grep branchPred
cat m5out/$statsname | grep branch_predictor
cat m5out/$statsname | grep execution_unit
