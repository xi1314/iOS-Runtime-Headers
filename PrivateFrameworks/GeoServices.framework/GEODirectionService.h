/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionService : NSObject

+ (id)sharedService;

- (id)directionsURL;
- (id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 routeAttributes:(id)arg3 stepIndex:(unsigned int)arg4;
- (id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 returnToOriginalDestination:(BOOL)arg4 isReroute:(BOOL)arg5 routeAttributes:(id)arg6;
- (id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRouteZilchPoints:(id)arg3 originalRouteID:(id)arg4 returnToOriginalDestination:(BOOL)arg5 isReroute:(BOOL)arg6 routeAttributes:(id)arg7;
- (id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned int)arg3;
- (id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned int)arg3;
- (id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;

@end
