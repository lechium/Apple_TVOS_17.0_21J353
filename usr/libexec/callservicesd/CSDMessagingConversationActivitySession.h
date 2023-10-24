//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationActivity, MISSING_TYPE, NSString, TUConversationActivitySession;

@interface CSDMessagingConversationActivitySession : PBCodable
{
    double _creationDateEpochTime;	// 8 = 0x8
    CSDMessagingConversationActivity *_activity;	// 16 = 0x10
    NSString *_identifierUUIDString;	// 24 = 0x18
    MISSING_TYPE *_has;	// 32 = 0x20
}

+ (id)activitySessionWithTUConversationActivitySession:(id)arg1 fromConversation:(id)arg2;	// IMP=0x00100000001addea
+ (id)activitySessionWithTUConversationActivitySession:(id)arg1 fromConversation:(id)arg2 forStorage:(_Bool)arg3;	// IMP=0x00100000001add31
- (void).cxx_destruct;	// IMP=0x00100000000c6d59
@property(nonatomic) double creationDateEpochTime; // @synthesize creationDateEpochTime=_creationDateEpochTime;
@property(retain, nonatomic) CSDMessagingConversationActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSString *identifierUUIDString; // @synthesize identifierUUIDString=_identifierUUIDString;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c6c60
- (unsigned long long)hash;	// IMP=0x00100000000c6b10
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c6a24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c6962
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c68db
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c6856
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c6849
- (id)dictionaryRepresentation;	// IMP=0x00100000000c6505
- (id)description;	// IMP=0x00100000000c6456
@property(nonatomic) _Bool hasCreationDateEpochTime;
@property(readonly, nonatomic) _Bool hasActivity;
@property(readonly, nonatomic) _Bool hasIdentifierUUIDString;
@property(readonly, nonatomic) TUConversationActivitySession *tuConversationActivitySession;

@end
