//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface NSCoder (VNAdditions)
- (float)vn_decodeValidatedScoreForKey:(id)arg1;	// IMP=0x009000000005f9ce
- (void)vn_encodeValidatedScore:(float)arg1 forKey:(id)arg2;	// IMP=0x009000000005f874
- (float)vn_decodeValidatedConfidenceForKey:(id)arg1;	// IMP=0x009000000005f717
- (void)vn_encodeValidatedConfidence:(float)arg1 forKey:(id)arg2;	// IMP=0x009000000005f5c0
- (struct __CVBuffer *)vn_decodePixelBufferForKey:(id)arg1;	// IMP=0x009000000005f4e4
- (void)vn_encodePixelBuffer:(struct __CVBuffer *)arg1 forKey:(id)arg2;	// IMP=0x009000000005f44f
- (struct CGRect)vn_decodeRectForKey:(id)arg1;	// IMP=0x009000000005f343
- (void)vn_encodeRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x009000000005f210
- (struct CGSize)vn_decodeSizeForKey:(id)arg1;	// IMP=0x009000000005f10d
- (void)vn_encodeSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x009000000005f009
- (struct CGPoint)vn_decodePointForKey:(id)arg1;	// IMP=0x009000000005ef06
- (void)vn_encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x009000000005ee02
- (CDStruct_5c5366e1)vn_decodeTimeRangeForKey:(id)arg1;	// IMP=0x009000000005ed0a
- (void)vn_encodeTimeRange:(CDStruct_5c5366e1)arg1 forKey:(id)arg2;	// IMP=0x009000000005ec6b
- (MISSING_TYPE *)vn_decodeSimdFloat3ForKey:(id)arg1;	// IMP=0x009000000005e99d
- (void)vn_encodeSimdFloat3:(id)arg1 forKey: /* Error: Ran out of types for this method. */;	// IMP=0x009000000005e8e8
- (CDStruct_14d5dc5e)vn_decode4x4MatrixForKey:(id)arg1;	// IMP=0x009000000005e682
- (void)vn_encode4x4Matrix:(CDStruct_14d5dc5e)arg1 forKey:(id)arg2;	// IMP=0x009000000005e52e
- (CDStruct_8e0628e6)vn_decode3x3MatrixForKey:(id)arg1;	// IMP=0x009000000005e258
- (void)vn_encode3x3Matrix:(CDStruct_8e0628e6)arg1 forKey:(id)arg2;	// IMP=0x009000000005e17a
- (struct CGAffineTransform)vn_decodeCGAffineTransformForKey:(id)arg1;	// IMP=0x009000000005deea
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;	// IMP=0x009000000005de34
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;	// IMP=0x009000000005de22
- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;	// IMP=0x009000000005de10
- (id)vn_decodeEntityUniqueIdentifierArrayForKey:(id)arg1;	// IMP=0x0090000000297cd7
- (id)vn_decodeEntityUniqueIdentifierForKey:(id)arg1;	// IMP=0x0090000000297c69
- (void)vn_encodeEntityUniqueIdentifierArray:(id)arg1 forKey:(id)arg2;	// IMP=0x0090000000297c57
- (void)vn_encodeEntityUniqueIdentifier:(id)arg1 forKey:(id)arg2;	// IMP=0x0090000000297c45
- (id)vn_decodePersonUniqueIdentifierForKey:(id)arg1;	// IMP=0x00900000002a36f5
- (void)vn_encodePersonUniqueIdentifier:(id)arg1 forKey:(id)arg2;	// IMP=0x00900000002a36e3
@end

