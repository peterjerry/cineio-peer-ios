//
//  LocalOfferSDPObserver.h
//  cineio-peer-ios
//
//  Created by Thomas Shafer on 2/27/15.
//  Copyright (c) 2015 cine.io. All rights reserved.
//

#ifndef cineioPeerIOS_LocalOfferSDPObserver_h
#define cineioPeerIOS_LocalOfferSDPObserver_h

//Vendor
@class RTCMember;

//Cine Peer SDK
@class CinePeerClient;

@interface LocalOfferSDPObserver : NSObject
- (void)rtcMember:(RTCMember *)member cinePeerClient:(CinePeerClient *)cinePeerClient;
@end

#endif