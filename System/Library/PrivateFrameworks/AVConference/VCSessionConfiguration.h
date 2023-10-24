//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;
@protocol NSCopying, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionConfiguration : NSObject
{
    long long _sessionMode;	// 8 = 0x8
    NSObject<NSCopying> *_reportingHierarchyToken;	// 16 = 0x10
    _Bool _oneToOneModeEnabled;	// 24 = 0x18
    _Bool _remoteScreenControlEnabled;	// 25 = 0x19
    _Bool _isGKVoiceChat;	// 26 = 0x1a
    NSUUID *_conversationID;	// 32 = 0x20
    NSDate *_conversationTimeBase;	// 40 = 0x28
    NSDate *_conversationTimeBaseTruncated;	// 48 = 0x30
    NSObject<OS_nw_activity> *_parentNWActivity;	// 56 = 0x38
    NSString *_serviceName;	// 64 = 0x40
    _Bool _outOfProcessCodecsEnabled;	// 72 = 0x48
}

@property(nonatomic) _Bool outOfProcessCodecsEnabled; // @synthesize outOfProcessCodecsEnabled=_outOfProcessCodecsEnabled;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // @synthesize parentNWActivity=_parentNWActivity;
@property(copy, nonatomic) NSDate *conversationTimeBaseTruncated; // @synthesize conversationTimeBaseTruncated=_conversationTimeBaseTruncated;
@property(copy, nonatomic) NSDate *conversationTimeBase; // @synthesize conversationTimeBase=_conversationTimeBase;
@property(copy, nonatomic) NSUUID *conversationID; // @synthesize conversationID=_conversationID;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
@property(nonatomic, getter=isRemoteScreenControlEnabled) _Bool remoteScreenControlEnabled; // @synthesize remoteScreenControlEnabled=_remoteScreenControlEnabled;
@property(nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(retain, nonatomic) NSObject<NSCopying> *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
- (void)cleanupNwActivity;	// IMP=0x000000000004f967
- (_Bool)applyConfigurationUsingClientDict:(id)arg1;	// IMP=0x000000000004f762
- (_Bool)updateWithClientDictionary:(id)arg1;	// IMP=0x000000000004f5bc
@property(nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
- (void)dealloc;	// IMP=0x000000000004f40f
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x000000000004f3d0
- (id)init;	// IMP=0x000000000004f371

@end

