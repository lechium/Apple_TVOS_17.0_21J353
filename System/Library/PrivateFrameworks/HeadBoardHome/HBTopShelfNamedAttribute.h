//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HBTopShelfNamedAttribute : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSArray *_values;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000aa92b
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 values:(id)arg2;	// IMP=0x00000000000aa772

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

