//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HMFNetAddressInternal : HMFObject
{
    unsigned long long _addressFamily;	// 8 = 0x8
    NSString *_addressString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000048eac
@property(readonly, copy, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly, nonatomic) unsigned long long addressFamily; // @synthesize addressFamily=_addressFamily;
- (id)dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x0000000000048e82

@end

