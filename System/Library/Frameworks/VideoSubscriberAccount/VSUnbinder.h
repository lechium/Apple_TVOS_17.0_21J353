//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VSUnbinder : NSObject
{
    _Bool _invalid;	// 8 = 0x8
    NSMapTable *_bindingsByBinder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022bf1
@property(retain, nonatomic) NSMapTable *bindingsByBinder; // @synthesize bindingsByBinder=_bindingsByBinder;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
- (void)binder:(id)arg1 didTearDownBinding:(id)arg2;	// IMP=0x0000000000022a57
- (void)binder:(id)arg1 didEstablishBinding:(id)arg2;	// IMP=0x00000000000228ef
- (void)dealloc;	// IMP=0x00000000000225e9
- (id)init;	// IMP=0x0000000000022583

@end

