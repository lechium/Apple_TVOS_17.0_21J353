//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSObject (PXReusableObject)
+ (id)px_descriptionForAssertionMessage;	// IMP=0x00200000002714e0
+ (void)px_enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00200000009501ed
+ (void)px_performOnceForFirstAncestorClassSubclassOf:(Class)arg1 context:(void *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x002000000094ff28
+ (void)px_swizzleClassMethod:(SEL)arg1 withMethod:(SEL)arg2;	// IMP=0x002000000094fe75
+ (void)px_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;	// IMP=0x002000000094fdac
@property(nonatomic, setter=_px_setReuseIdentifier:) long long _px_reuseIdentifier;
@property(readonly) NSString *px_descriptionForAssertionMessage;
@end

