//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface SSPromiseResult : NSObject
{
    NSError *_error;	// 8 = 0x8
    id _result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000066b1f
@property(readonly, nonatomic) id result; // @synthesize result=_result;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000066a60

@end

