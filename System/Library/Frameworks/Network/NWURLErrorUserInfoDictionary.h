//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NWURLError;

__attribute__((visibility("hidden")))
@interface NWURLErrorUserInfoDictionary : NSDictionary
{
    NWURLError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007cad40
@property(retain, nonatomic) NWURLError *error; // @synthesize error=_error;
- (id)keyEnumerator;	// IMP=0x00000000007cac30
- (id)objectForKey:(id)arg1;	// IMP=0x00000000007cab50
- (unsigned long long)count;	// IMP=0x00000000007caa60
- (id)initWithError:(id)arg1;	// IMP=0x00000000007ca9f0

@end

