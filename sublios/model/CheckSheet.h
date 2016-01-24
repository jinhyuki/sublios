//
//  CheckSheet.h
//  sublios
//
//  Created by Jin Hyuk Cho on 1/23/16.
//  Copyright © 2016 Jin Hyuk Cho. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CheckSheet : NSObject

@property (assign) long id;
@property (strong) NSString* name;

- (id)initWithTitle:(NSString*)title id:(long)id;

@end
