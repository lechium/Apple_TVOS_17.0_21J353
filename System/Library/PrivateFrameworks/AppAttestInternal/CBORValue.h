//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CBORValue : NSObject
{
}

- (unsigned long long)getNumUintBytes:(unsigned long long)arg1;	// IMP=0x0000000000002f0c
- (void)setUint:(unsigned char)arg1 item2:(unsigned long long)arg2 output:(id)arg3;	// IMP=0x0000000000002ddd
- (void)setAdditionalInformation:(unsigned char)arg1 item2:(unsigned char)arg2 output:(id)arg3;	// IMP=0x0000000000002daf
- (void)encodeStartItems:(unsigned long long)arg1 output:(id)arg2;	// IMP=0x0000000000002d4b
- (void)write:(id)arg1;	// IMP=0x0000000000002d34
@property(readonly, nonatomic) unsigned char fieldValue;
@property(readonly, nonatomic) int fieldType;

@end

