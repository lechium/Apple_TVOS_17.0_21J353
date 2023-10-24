//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable
{
    NSMutableArray *_containerPrivacySettings;	// 8 = 0x8
}

+ (Class)containerPrivacySettingsType;	// IMP=0x00100000001d60e3
- (void).cxx_destruct;	// IMP=0x00000000001d6b56
@property(retain, nonatomic) NSMutableArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d69f8
- (unsigned long long)hash;	// IMP=0x00000000001d69db
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d694b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d6787
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d66c2
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d658c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d657f
- (id)dictionaryRepresentation;	// IMP=0x00000000001d61a3
- (id)description;	// IMP=0x00000000001d60f4
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d60c6
- (unsigned long long)containerPrivacySettingsCount;	// IMP=0x00000000001d60a9
- (void)addContainerPrivacySettings:(id)arg1;	// IMP=0x00000000001d603f
- (void)clearContainerPrivacySettings;	// IMP=0x00000000001d6022

@end

