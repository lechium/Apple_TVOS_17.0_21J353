//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface DaemonPBFusePreferences : PBCodable
{
    NSMutableArray *_preferences;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000196df7
@property(retain, nonatomic) NSMutableArray *preferences; // @synthesize preferences=_preferences;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000196c99
- (unsigned long long)hash;	// IMP=0x0010000000196c7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000196bec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000196a28
- (void)writeTo:(id)arg1;	// IMP=0x00100000001968f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001968e5
- (id)dictionaryRepresentation;	// IMP=0x00100000001964f9
- (id)description;	// IMP=0x001000000019644a
- (id)preferencesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000019642d
- (unsigned long long)preferencesCount;	// IMP=0x0010000000196410
- (void)addPreferences:(id)arg1;	// IMP=0x00100000001963a6
- (void)clearPreferences;	// IMP=0x0010000000196389

@end
