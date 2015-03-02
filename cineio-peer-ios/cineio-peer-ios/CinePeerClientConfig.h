//
//  CinePeerClientConfig.h
//  cineio-peer-ios
//
//  Created by Thomas Shafer on 2/28/15.
//  Copyright (c) 2015 cine.io. All rights reserved.
//

#ifndef cineioPeerIOS_CinePeerClientConfig_h
#define cineioPeerIOS_CinePeerClientConfig_h

//Vendor
@class RTCMediaStream;
@class RTCPeerConnection;

//Cine Peer SDK
@class Identity;
@class Call;


@protocol CinePeerClientDelegate <NSObject>
- (void) addStream:(RTCMediaStream *)stream peerConnection:(RTCPeerConnection *)peerConnection local:(BOOL)local;
- (void) removeStream:(RTCMediaStream *)stream peerConnection:(RTCPeerConnection *)peerConnection local:(BOOL)local;
- (void) handleError:(NSDictionary *)error;
- (void) handleCall:(Call *)call;
- (void) onCallCancel:(Call *)call;
- (void) onCallReject:(Call *)call;
@end

@interface CinePeerClientConfig : NSObject
@property (nonatomic, weak) id<CinePeerClientDelegate> delegate;

- (id) initWithPublicKey:(NSString *)publicKey delegate:(id<CinePeerClientDelegate>)delegate;
- (id<CinePeerClientDelegate>) getDelegate;

- (NSString *)getPublicKey;

- (NSString *)getSecretKey;
- (void)setSecretKey:(NSString *)secretKey;

- (Identity *) generateIdentity:(NSString *)identityName;
@end

#endif