//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <CoreUtils/CUByteCodable-Protocol.h>

@interface NSString (CUByteCodable) <CUByteCodable>
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000c1f3d
- (id)encodedDataAndReturnError:(id *)arg1;	// IMP=0x00100000000c1512
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00100000000c149f
@end

