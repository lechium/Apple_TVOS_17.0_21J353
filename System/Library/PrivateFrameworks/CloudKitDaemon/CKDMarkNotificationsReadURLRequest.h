//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest
{
    CDUnknownBlockType _notificationMarkedReadProgressBlock;	// 8 = 0x8
    NSArray *_notificationIDs;	// 16 = 0x10
    NSMutableDictionary *_notificationIDsByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000037773c
@property(retain, nonatomic) NSMutableDictionary *notificationIDsByRequestID; // @synthesize notificationIDsByRequestID=_notificationIDsByRequestID;
@property(retain, nonatomic) NSArray *notificationIDs; // @synthesize notificationIDs=_notificationIDs;
@property(copy, nonatomic) CDUnknownBlockType notificationMarkedReadProgressBlock; // @synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock;
- (id)zoneIDsToLock;	// IMP=0x0000000000377617
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000003774c4
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000037737f
- (id)generateRequestOperations;	// IMP=0x0000000000377131
- (id)requestOperationClasses;	// IMP=0x00000000003770c5
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000376fc1
- (id)initWithOperation:(id)arg1 notificationIDsToMarkRead:(id)arg2;	// IMP=0x0000000000376f49

@end

