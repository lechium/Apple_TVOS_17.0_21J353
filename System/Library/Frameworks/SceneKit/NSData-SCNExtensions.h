//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (SCNExtensions)
- (id)scn_indexedDataDecodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x009000000010a262
- (id)scn_indexedDataEncodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x0090000000109d64
- (id)scn_indexedDataDecodingDeltaWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x0090000000109bd4
- (id)scn_indexedDataEncodingDeltaWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x0090000000109a41
- (id)scn_indexedDataDecodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x0090000000109884
- (id)scn_indexedDataEncodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x00900000001096c4
- (id)scn_uncompressedDataUsingCompressionAlgorithm:(int)arg1;	// IMP=0x00900000001096ad
- (id)scn_compressedDataUsingCompressionAlgorithm:(int)arg1;	// IMP=0x0090000000109699
- (id)_operateOnDataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;	// IMP=0x009000000010952c
@end

