//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationActivityContext, CSDMessagingConversationActivityMetadata, CSDMessagingHandle, NSData, NSString, TUConversationActivity;

@interface CSDMessagingConversationActivity : PBCodable
{
    double _timestampAsTimeIntervalSinceReferenceDate;	// 8 = 0x8
    double _updatedDateEpochTime;	// 16 = 0x10
    CSDMessagingConversationActivityContext *_activityContext;	// 24 = 0x18
    NSString *_activityIdentifier;	// 32 = 0x20
    CSDMessagingConversationActivityMetadata *_activityMetadata;	// 40 = 0x28
    NSData *_applicationContext;	// 48 = 0x30
    NSString *_bundleIdentifier;	// 56 = 0x38
    NSString *_fallbackApplicationName;	// 64 = 0x40
    CSDMessagingHandle *_fromHandle;	// 72 = 0x48
    NSString *_identifierUUIDString;	// 80 = 0x50
    NSData *_metadata;	// 88 = 0x58
    CSDMessagingHandle *_originatorHandle;	// 96 = 0x60
    _Bool _isSystemActivity;	// 104 = 0x68
    struct {
        unsigned int timestampAsTimeIntervalSinceReferenceDate:1;
        unsigned int updatedDateEpochTime:1;
        unsigned int isSystemActivity:1;
    } _has;	// 108 = 0x6c
}

+ (id)activityWithCSDConversationActivity:(id)arg1 handle:(id)arg2;	// IMP=0x001000000009face
+ (id)activityWithCSDConversationActivity:(id)arg1 fromConversation:(id)arg2 forStorage:(_Bool)arg3;	// IMP=0x001000000009f3fb
- (void).cxx_destruct;	// IMP=0x0010000000130d33
@property(retain, nonatomic) CSDMessagingHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property(nonatomic) double timestampAsTimeIntervalSinceReferenceDate; // @synthesize timestampAsTimeIntervalSinceReferenceDate=_timestampAsTimeIntervalSinceReferenceDate;
@property(nonatomic) _Bool isSystemActivity; // @synthesize isSystemActivity=_isSystemActivity;
@property(retain, nonatomic) CSDMessagingConversationActivityMetadata *activityMetadata; // @synthesize activityMetadata=_activityMetadata;
@property(retain, nonatomic) NSString *fallbackApplicationName; // @synthesize fallbackApplicationName=_fallbackApplicationName;
@property(nonatomic) double updatedDateEpochTime; // @synthesize updatedDateEpochTime=_updatedDateEpochTime;
@property(retain, nonatomic) CSDMessagingHandle *originatorHandle; // @synthesize originatorHandle=_originatorHandle;
@property(retain, nonatomic) CSDMessagingConversationActivityContext *activityContext; // @synthesize activityContext=_activityContext;
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSData *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(retain, nonatomic) NSString *identifierUUIDString; // @synthesize identifierUUIDString=_identifierUUIDString;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000013096a
- (unsigned long long)hash;	// IMP=0x0010000000130633
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013037b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000130131
- (void)copyTo:(id)arg1;	// IMP=0x001000000012ff66
- (void)writeTo:(id)arg1;	// IMP=0x001000000012fdad
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000012fda0
- (id)dictionaryRepresentation;	// IMP=0x001000000012f596
- (id)description;	// IMP=0x001000000012f4e7
@property(readonly, nonatomic) _Bool hasFromHandle;
@property(nonatomic) _Bool hasTimestampAsTimeIntervalSinceReferenceDate;
@property(nonatomic) _Bool hasIsSystemActivity;
@property(readonly, nonatomic) _Bool hasActivityMetadata;
@property(readonly, nonatomic) _Bool hasFallbackApplicationName;
@property(nonatomic) _Bool hasUpdatedDateEpochTime;
@property(readonly, nonatomic) _Bool hasOriginatorHandle;
@property(readonly, nonatomic) _Bool hasActivityContext;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasActivityIdentifier;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasApplicationContext;
@property(readonly, nonatomic) _Bool hasIdentifierUUIDString;
- (id)description;	// IMP=0x00100000000a0832
@property(readonly, nonatomic) TUConversationActivity *tuConversationActivity;

@end

