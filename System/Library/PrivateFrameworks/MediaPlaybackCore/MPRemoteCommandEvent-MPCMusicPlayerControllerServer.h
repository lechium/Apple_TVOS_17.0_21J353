//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class ICUserIdentity, NSString;

@interface MPRemoteCommandEvent (MPCMusicPlayerControllerServer)
+ (id)payloadValueFromJSONValue:(id)arg1;	// IMP=0x00000000002a5566
- (id)serverCopy;	// IMP=0x001000000015ee85
- (id)mpc_jsonValue;	// IMP=0x00100000002a2abd
@property(readonly, nonatomic) ICUserIdentity *userIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
