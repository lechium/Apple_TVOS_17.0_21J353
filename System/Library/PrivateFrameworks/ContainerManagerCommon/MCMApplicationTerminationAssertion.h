//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RBSTerminationAssertion;

__attribute__((visibility("hidden")))
@interface MCMApplicationTerminationAssertion : NSObject
{
    RBSTerminationAssertion *_termAssertion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009ce09
@property(retain, nonatomic) RBSTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
- (void)dealloc;	// IMP=0x000000000009cd0b
- (void)invalidate;	// IMP=0x000000000009cc42
- (id)initWithBundleIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x000000000009c54b

@end
