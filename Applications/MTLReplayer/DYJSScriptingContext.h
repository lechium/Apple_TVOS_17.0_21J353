//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, JSVirtualMachine, NSString;

@interface DYJSScriptingContext : NSObject
{
    struct unordered_map<const char *, OpaqueJSValue *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSValue *>>> _cache;	// 8 = 0x8
    struct unordered_map<const char *, OpaqueJSString *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSString *>>> _stringCache;	// 48 = 0x30
    struct OpaqueJSValue *_globalObject;	// 88 = 0x58
    NSString *_filename;	// 96 = 0x60
    JSVirtualMachine *_virtualMachine;	// 104 = 0x68
    JSContext *_context;	// 112 = 0x70
    CDUnknownBlockType _exceptionHandler;	// 120 = 0x78
}

+ (id)sharedContext;	// IMP=0x004000000002fdac
- (id).cxx_construct;	// IMP=0x002000000002fc14
- (void).cxx_destruct;	// IMP=0x001000000002fba3
@property(copy, nonatomic) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) JSVirtualMachine *virtualMachine; // @synthesize virtualMachine=_virtualMachine;
- (id)getGlobalJSONObject:(const char *)arg1;	// IMP=0x001000000002f948
- (_Bool)setGlobalJSONObject:(const char *)arg1 value:(id)arg2;	// IMP=0x001000000002f709
- (double)getGlobalDouble:(const char *)arg1;	// IMP=0x001000000002f5d6
- (void)setGlobalDouble:(const char *)arg1 value:(double)arg2;	// IMP=0x001000000002f4a9
- (double)callGlobalFunction:(const char *)arg1;	// IMP=0x001000000002ec10
- (struct OpaqueJSString *)_cachedStringFromString:(const char *)arg1;	// IMP=0x001000000002e577
- (double)callFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x001000000002e535
- (id)getValue:(id)arg1;	// IMP=0x001000000002e51f
- (_Bool)evaluteScript:(id)arg1 scriptURL:(id)arg2;	// IMP=0x001000000002e3f6
- (void)_clearCache;	// IMP=0x001000000002e332
- (void)setValues:(id)arg1;	// IMP=0x001000000002e2e0
- (void)setRawArrayValues:(id)arg1 withUint64Values:(unsigned long long *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x001000000002e1cd
- (struct OpaqueJSValue *)createArrayRef:(id)arg1;	// IMP=0x001000000002e132
- (void)setRawArrayValues:(id)arg1 withUint32Values:(unsigned int *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x001000000002e02c
- (id)setValue:(id)arg1 value:(id)arg2;	// IMP=0x001000000002dfd6
- (basic_string_eaee8f9a)_jsValueToString:(struct OpaqueJSValue *)arg1;	// IMP=0x001000000002df6d
- (basic_string_eaee8f9a)_jsStringToString:(struct OpaqueJSString *)arg1;	// IMP=0x001000000002dea9
- (void)dealloc;	// IMP=0x001000000002de48
- (void)allocNewContext;	// IMP=0x001000000002ddf8
- (id)init;	// IMP=0x001000000002dd91

@end

