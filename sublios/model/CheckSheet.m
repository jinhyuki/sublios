//
//  CheckSheet.m
//  sublios
//
//  Created by Jin Hyuk Cho on 1/23/16.
//  Copyright © 2016 Jin Hyuk Cho. All rights reserved.
//

#import "CheckSheet.h"

@implementation CheckSheet

- (id)initWithTitle:(NSString *)title id:(long)id {
    if ((self = [super init])) {
        self.name = title;
        self.id = id;
    }
    return self;
}

@end
