//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MGGroupsActivity : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSDate *_when;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005f32
@property(readonly, nonatomic) NSDate *when; // @synthesize when=_when;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000005e52
- (void)dealloc;	// IMP=0x0000000000005cf5
- (id)initWithName:(id)arg1;	// IMP=0x0000000000005bd8

@end
