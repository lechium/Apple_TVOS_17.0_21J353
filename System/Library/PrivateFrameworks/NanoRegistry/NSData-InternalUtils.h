//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (InternalUtils)
+ (id)fromUUID:(id)arg1;	// IMP=0x002000000003deb2
+ (id)dataWithRandomBytesOfSize:(unsigned long long)arg1;	// IMP=0x002000000003de01
- (_Bool)matchesDataAtFilePath:(id)arg1;	// IMP=0x001000000001635e
@property(readonly, nonatomic) NSData *NRSHA256;
- (void)NRSHA256:(unsigned char [32])arg1;	// IMP=0x001000000003df9b
- (id)toUUID;	// IMP=0x001000000003df35
@end

