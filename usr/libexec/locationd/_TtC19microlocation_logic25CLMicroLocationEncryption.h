//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC19microlocation_logic25CLMicroLocationEncryption : NSObject
{
}

+ (id)decryptData:(id)arg1 keyLabel:(id)arg2;	// IMP=0x0020000000145250
+ (id)encryptData:(id)arg1 keyLabel:(id)arg2;	// IMP=0x0010000000145110
+ (_Bool)decryptFile:(id)arg1 destinationPath:(id)arg2 keyLabel:(id)arg3 keychainClass:(Class)arg4;	// IMP=0x0010000000145040
+ (_Bool)encryptFile:(id)arg1 destinationPath:(id)arg2 keyLabel:(id)arg3 keychainClass:(Class)arg4;	// IMP=0x0010000000145010
- (void).cxx_destruct;	// IMP=0x00400000001453f0
- (id)init;	// IMP=0x0010000000145390

@end
