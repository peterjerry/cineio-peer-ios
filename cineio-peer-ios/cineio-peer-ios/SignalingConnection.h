//
//  SignalingConnection.h
//  cineio-peer-ios
//
//  Created by Thomas Shafer on 2/28/15.
//  Copyright (c) 2015 cine.io. All rights reserved.
//

#ifndef cineioPeerIOS_SignalingConnection_h
#define cineioPeerIOS_SignalingConnection_h
#import <Foundation/Foundation.h>

//Vendor
@class RTCICECandidate;
@class RTCSessionDescription;

//Cine Peer SDK
@class PeerConnectionManager;
@class CinePeerClientConfig;
@class Identity;

@interface SignalingConnection : NSObject

- (void)connect;
- (id)initWithConfig:(CinePeerClientConfig *)theConfig;
- (void)joinRoom:(NSString *)roomName;
- (void)leaveRoom:(NSString *)roomName;
- (void)identify:(Identity *)identity;
- (void)rejectCall:(NSString *)roomName;
- (void)setPeerConnectionsManager:(PeerConnectionManager *)peerConnectionManager;
- (void)sendIceCandidate:(NSString *)sparkId candidate:(RTCICECandidate *)candidate;
- (void)sendLocalDescription:(NSString *)sparkId  description:(RTCSessionDescription *)description;
@end


#endif