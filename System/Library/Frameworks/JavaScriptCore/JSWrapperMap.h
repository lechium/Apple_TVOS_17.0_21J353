//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface JSWrapperMap : NSObject
{
    struct RetainPtr<NSMutableDictionary> m_classMap;	// 8 = 0x8
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> m_cachedJSWrappers;	// 16 = 0x10
    struct RetainPtr<NSMapTable> m_cachedObjCWrappers;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x00000000005817f0
- (void).cxx_destruct;	// IMP=0x00000000005816c0
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;	// IMP=0x0000000000581620
- (id)jsWrapperForObject:(id)arg1 inContext:(id)arg2;	// IMP=0x0000000000581260
- (id)classInfoForClass:(Class)arg1;	// IMP=0x00000000005810b0
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg1;	// IMP=0x0000000000580eb0

@end

