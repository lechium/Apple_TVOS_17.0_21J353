//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface LogTransactions : PBCodable
{
    NSMutableArray *_transactionIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00100000001e57e1
- (unsigned long long)hash;	// IMP=0x00100000001e57c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e5734
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e5596
- (void)writeTo:(id)arg1;	// IMP=0x00100000001e5460
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001e530d
- (id)dictionaryRepresentation;	// IMP=0x00100000001e52b1
- (id)description;	// IMP=0x00100000001e5202
- (id)formattedText;	// IMP=0x0010000000107076

@end

