//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Announce/ANAnnouncement.h>

@class NSDictionary, NSURL;

@interface ANAnnouncement (RemotePlaybackSession)
+ (unsigned long long)defaultAudioEffects;	// IMP=0x0020000000020ebd
+ (void)uniqueAnnouncersInAnnouncements:(id)arg1 inHome:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000005d7ee
+ (id)contextsFrom:(id)arg1;	// IMP=0x002000000005f9b0
@property(readonly, nonatomic) NSURL *defaultActionURL;
@property(readonly, nonatomic) NSDictionary *sendFailureDictionary;
@property(readonly, nonatomic) NSDictionary *remoteSessionDictionary;
- (_Bool)processAudioWithEffects:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000020c01
- (id)announcerNameInHome:(id)arg1;	// IMP=0x001000000005d758
- (_Bool)isAnnouncerInSameRoomAsAccessory:(id)arg1;	// IMP=0x001000000005eca7
@end

