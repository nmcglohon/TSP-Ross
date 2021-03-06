#include "tsp.hpp"


//Given an LP's GID (global ID)
//return the PE (aka node, MPI Rank)
tw_peid tsp_map(tw_lpid gid)
{
     // if(gid/g_tw_nlp == 4)
     return (tw_peid) gid / g_tw_nlp;
}

tw_lpid get_lp_gid(int city, int place)
{
     return place*total_cities + city;
}

int get_city_from_gid(tw_lpid gid)
{
     return gid%total_cities;
}

int get_place_from_gid(tw_lpid gid)
{
     return gid/total_cities;
}
