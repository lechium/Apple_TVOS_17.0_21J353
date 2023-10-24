//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface WKFocusedElementInfo : NSObject
{
    long long _type;	// 8 = 0x8
    struct RetainPtr<NSString> _value;	// 16 = 0x10
    _Bool _isUserInitiated;	// 24 = 0x18
    struct RetainPtr<NSObject<NSSecureCoding>> _userObject;	// 32 = 0x20
    struct RetainPtr<NSString> _placeholder;	// 40 = 0x28
    struct RetainPtr<NSString> _label;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0000000000806582
- (void).cxx_destruct;	// IMP=0x0000000000806518
@property(readonly, copy, nonatomic) NSString *placeholder;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic, getter=isUserInitiated) _Bool userInitiated;
@property(readonly, copy, nonatomic) NSString *value;
@property(readonly, nonatomic) long long type;
- (id)initWithFocusedElementInformation:(const void *)arg1 isUserInitiated:(_Bool)arg2 userObject:(id)arg3;	// IMP=0x0000000000806360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

