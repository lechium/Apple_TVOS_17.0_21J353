//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface ASDPromiseResult : NSObject
{
    NSError *_error;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)resultWithValue:(id)arg1;	// IMP=0x006000000002bfd9
+ (id)resultWithError:(id)arg1;	// IMP=0x006000000002bebc
- (void).cxx_destruct;	// IMP=0x000000000002c056
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSError *error; // @synthesize error=_error;
- (id)init;	// IMP=0x000000000002c020

@end

