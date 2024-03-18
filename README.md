# 2024_CS458_Dynamic_Analysis_of_Software_Source_Code

## 1. Assignment 1: Graph Coverage
1. About Graph Coverage
    * structural coverage criteria (node and edge coverage)
      * edge coverage
      * edge-pair coverage
      * complete path coverage
      * specified path coverage
    * Simple and Prime paths
      * simple path: if no node appears more than once, except possibly the first and last nodes are the same
        * no internal loops
        * includes all other subpaths
        * a loop is a simple path
      * prime path: a simple path that does not appear as a proper subpath of any other simple path
    * round trips
      * simple round trip coverage: TR contains at least one round-trip path for each reachable node in G that begins and ends a routd-trip path.
      * complete round trip coverage: TR contains all round-trip paths for each readable node in G.
    * Touring, Sidetrips and Detours
      * Tour a test path p tours subpath q if q is a subpath of p
      * Tour with sidetrips: a test path p tours subpath q with sidetrips iff every edge in q is also in p in the same order
        * the tour can include a sidetip, as long as it comes back to the same node
      * Tour with detours: a test path p tours subpath q with detours iff every node in q is also in p in the same order
    * data flow coverage criteria
      * DU pair: a pair of locatio ($I_i$ , $I_j$) such that a variable v is defined at $I_i$ and used at $I_j$.
      * Def-clear: A path from $I_i$ to $I_j$ is def-clear with repect to variable v, if v is not given another value on any of the nodes are edges in the path
        * Reach: if there is a def-clear path from $I_i$ to $I_j$ with respect to v, the def of v at $I_i$ reaches the use at $I_j$.
      * du-path: A simple subpath that is def-clear with respect to v from a def of v to use of v
    * Touring DU-paths
      * A test path p du-tours subpath d with respect to v if p tours d and the subpath taken is def-clear with respect to v
    * Data Flow Test Criteria
      * All-defs coverage (ADC): for each set of du-paths $S = du(n,v)$, TR contains at least one path d in S.
      * All-uses coverage (AUC): for each set of du-paths to uses $S = du(n_i, n_j, v)$, TR contains at least one path d in S.
      * All-du-paths coverage (ADUPC): for each set $S = du(n_i, n_j, v)$, TR contains every path d in S.
