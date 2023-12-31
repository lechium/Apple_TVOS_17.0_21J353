//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class NSDate, NSUUID;

@interface NSUserActivity (NSUserActivityCoreSpotlightInteraction)
+ (_Bool)_registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000004153d
+ (_Bool)_currentUserActivityProxiesWithOptions:(id)arg1 matching:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000041833
- (void)_sendToCoreSpotlightIndexer;	// IMP=0x0010000000027fdd
- (void)_updateForwardToCoreSpotlightIndexer:(BOOL)arg1;	// IMP=0x0010000000027f3d
- (void)_setDirty:(_Bool)arg1 identifier:(id)arg2;	// IMP=0x00100000000286a7
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028453
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;	// IMP=0x00100000000283b6
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000028319
- (CDUnknownBlockType)_payloadUpdateBlockForIdentifier:(id)arg1;	// IMP=0x001000000002816b
- (id)_objectForIdentifier:(id)arg1;	// IMP=0x00100000000280f1
- (id)_payloadForIdentifier:(id)arg1;	// IMP=0x0010000000028077
- (void)_forceSave;	// IMP=0x00100000000415ba
- (_Bool)_finishUserInfoUpdate;	// IMP=0x00100000000414a7
- (unsigned long long)_beginUserInfoUpdate:(id)arg1;	// IMP=0x00100000000413f4
@property(getter=_isUniversalLink) _Bool _universalLink;
@property(readonly) unsigned long long _userInfoChangeCount;
- (id)_copyWithNewUUID;	// IMP=0x001000000004120c
@property(readonly, copy) NSDate *_sentToIndexerDate;
@property(readonly, copy) NSDate *_madeInitiallyCurrentDate;
@property(readonly) double _madeCurrentInterval;
@property(readonly, copy) NSDate *_madeCurrentEndDate;
@property(readonly, copy) NSDate *_madeCurrentDate;
@property(readonly, copy) NSUUID *_originalUniqueIdentifier;
- (id)_createUserActivityDataWithSaving:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000417a7
- (id)_createUserActivityStringsWithSaving:(_Bool)arg1 options:(id)arg2 string:(id *)arg3 optionalString:(id *)arg4 data:(id *)arg5 error:(id *)arg6;	// IMP=0x0010000000041702
- (_Bool)doSaveUserActivityWithTimeout:(double)arg1 isCurrent:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004193c
- (_Bool)_supportsSynchronizeActivityWithTimeout;	// IMP=0x001000000004184c
@end

